// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDITIONALASSIGNMENTSFORHITRESPONSE_H
#define QTAWS_CREATEADDITIONALASSIGNMENTSFORHITRESPONSE_H

#include "mturkresponse.h"
#include "createadditionalassignmentsforhitrequest.h"

namespace QtAws {
namespace MTurk {

class CreateAdditionalAssignmentsForHITResponsePrivate;

class QTAWSMTURK_EXPORT CreateAdditionalAssignmentsForHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateAdditionalAssignmentsForHITResponse(const CreateAdditionalAssignmentsForHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAdditionalAssignmentsForHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAdditionalAssignmentsForHITResponse)
    Q_DISABLE_COPY(CreateAdditionalAssignmentsForHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
