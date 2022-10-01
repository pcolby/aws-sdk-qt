// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEQUALIFICATIONWITHWORKERRESPONSE_H
#define QTAWS_ASSOCIATEQUALIFICATIONWITHWORKERRESPONSE_H

#include "mturkresponse.h"
#include "associatequalificationwithworkerrequest.h"

namespace QtAws {
namespace MTurk {

class AssociateQualificationWithWorkerResponsePrivate;

class QTAWSMTURK_EXPORT AssociateQualificationWithWorkerResponse : public MTurkResponse {
    Q_OBJECT

public:
    AssociateQualificationWithWorkerResponse(const AssociateQualificationWithWorkerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateQualificationWithWorkerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateQualificationWithWorkerResponse)
    Q_DISABLE_COPY(AssociateQualificationWithWorkerResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
