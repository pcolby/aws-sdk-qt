// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSRESPONSE_H
#define QTAWS_DELETELENSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "deletelensrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteLensResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    DeleteLensResponse(const DeleteLensRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLensRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLensResponse)
    Q_DISABLE_COPY(DeleteLensResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
