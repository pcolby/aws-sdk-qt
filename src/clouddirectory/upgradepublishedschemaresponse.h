// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEPUBLISHEDSCHEMARESPONSE_H
#define QTAWS_UPGRADEPUBLISHEDSCHEMARESPONSE_H

#include "clouddirectoryresponse.h"
#include "upgradepublishedschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradePublishedSchemaResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpgradePublishedSchemaResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpgradePublishedSchemaResponse(const UpgradePublishedSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpgradePublishedSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradePublishedSchemaResponse)
    Q_DISABLE_COPY(UpgradePublishedSchemaResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
