// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEAPPLIEDSCHEMAREQUEST_H
#define QTAWS_UPGRADEAPPLIEDSCHEMAREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradeAppliedSchemaRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpgradeAppliedSchemaRequest : public CloudDirectoryRequest {

public:
    UpgradeAppliedSchemaRequest(const UpgradeAppliedSchemaRequest &other);
    UpgradeAppliedSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeAppliedSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
