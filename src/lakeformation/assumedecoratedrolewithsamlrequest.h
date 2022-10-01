// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEDECORATEDROLEWITHSAMLREQUEST_H
#define QTAWS_ASSUMEDECORATEDROLEWITHSAMLREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class AssumeDecoratedRoleWithSAMLRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT AssumeDecoratedRoleWithSAMLRequest : public LakeFormationRequest {

public:
    AssumeDecoratedRoleWithSAMLRequest(const AssumeDecoratedRoleWithSAMLRequest &other);
    AssumeDecoratedRoleWithSAMLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeDecoratedRoleWithSAMLRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
