// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPENSEANALYSISREQUEST_H
#define QTAWS_GETEXPENSEANALYSISREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class GetExpenseAnalysisRequestPrivate;

class QTAWSTEXTRACT_EXPORT GetExpenseAnalysisRequest : public TextractRequest {

public:
    GetExpenseAnalysisRequest(const GetExpenseAnalysisRequest &other);
    GetExpenseAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExpenseAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
