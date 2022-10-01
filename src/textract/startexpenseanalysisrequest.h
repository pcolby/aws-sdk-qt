// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPENSEANALYSISREQUEST_H
#define QTAWS_STARTEXPENSEANALYSISREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class StartExpenseAnalysisRequestPrivate;

class QTAWSTEXTRACT_EXPORT StartExpenseAnalysisRequest : public TextractRequest {

public:
    StartExpenseAnalysisRequest(const StartExpenseAnalysisRequest &other);
    StartExpenseAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExpenseAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
