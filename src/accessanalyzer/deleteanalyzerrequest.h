// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYZERREQUEST_H
#define QTAWS_DELETEANALYZERREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteAnalyzerRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT DeleteAnalyzerRequest : public AccessAnalyzerRequest {

public:
    DeleteAnalyzerRequest(const DeleteAnalyzerRequest &other);
    DeleteAnalyzerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
