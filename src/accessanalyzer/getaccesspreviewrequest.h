// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPREVIEWREQUEST_H
#define QTAWS_GETACCESSPREVIEWREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAccessPreviewRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT GetAccessPreviewRequest : public AccessAnalyzerRequest {

public:
    GetAccessPreviewRequest(const GetAccessPreviewRequest &other);
    GetAccessPreviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPreviewRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
