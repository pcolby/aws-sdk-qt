// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERRESPONSE_H
#define QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERRESPONSE_H

#include "mturkresponse.h"
#include "disassociatequalificationfromworkerrequest.h"

namespace QtAws {
namespace MTurk {

class DisassociateQualificationFromWorkerResponsePrivate;

class QTAWSMTURK_EXPORT DisassociateQualificationFromWorkerResponse : public MTurkResponse {
    Q_OBJECT

public:
    DisassociateQualificationFromWorkerResponse(const DisassociateQualificationFromWorkerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateQualificationFromWorkerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateQualificationFromWorkerResponse)
    Q_DISABLE_COPY(DisassociateQualificationFromWorkerResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
