// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIORESPONSE_H
#define QTAWS_DELETESTUDIORESPONSE_H

#include "emrresponse.h"
#include "deletestudiorequest.h"

namespace QtAws {
namespace Emr {

class DeleteStudioResponsePrivate;

class QTAWSEMR_EXPORT DeleteStudioResponse : public EmrResponse {
    Q_OBJECT

public:
    DeleteStudioResponse(const DeleteStudioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStudioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioResponse)
    Q_DISABLE_COPY(DeleteStudioResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
