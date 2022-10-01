// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEIDREQUEST_H
#define QTAWS_ANALYZEIDREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeIDRequestPrivate;

class QTAWSTEXTRACT_EXPORT AnalyzeIDRequest : public TextractRequest {

public:
    AnalyzeIDRequest(const AnalyzeIDRequest &other);
    AnalyzeIDRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AnalyzeIDRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
