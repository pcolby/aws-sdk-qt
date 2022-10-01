// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSTACKSTOSTACKSETREQUEST_H
#define QTAWS_IMPORTSTACKSTOSTACKSETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ImportStacksToStackSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ImportStacksToStackSetRequest : public CloudFormationRequest {

public:
    ImportStacksToStackSetRequest(const ImportStacksToStackSetRequest &other);
    ImportStacksToStackSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportStacksToStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
