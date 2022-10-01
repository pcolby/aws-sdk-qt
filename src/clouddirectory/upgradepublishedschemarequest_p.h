// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEPUBLISHEDSCHEMAREQUEST_P_H
#define QTAWS_UPGRADEPUBLISHEDSCHEMAREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "upgradepublishedschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradePublishedSchemaRequest;

class UpgradePublishedSchemaRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpgradePublishedSchemaRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpgradePublishedSchemaRequest * const q);
    UpgradePublishedSchemaRequestPrivate(const UpgradePublishedSchemaRequestPrivate &other,
                                   UpgradePublishedSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpgradePublishedSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
