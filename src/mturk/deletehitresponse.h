// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHITRESPONSE_H
#define QTAWS_DELETEHITRESPONSE_H

#include "mturkresponse.h"
#include "deletehitrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteHITResponsePrivate;

class QTAWSMTURK_EXPORT DeleteHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    DeleteHITResponse(const DeleteHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHITResponse)
    Q_DISABLE_COPY(DeleteHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
