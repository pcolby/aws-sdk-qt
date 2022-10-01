// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEAPPLIEDSCHEMARESPONSE_H
#define QTAWS_UPGRADEAPPLIEDSCHEMARESPONSE_H

#include "clouddirectoryresponse.h"
#include "upgradeappliedschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradeAppliedSchemaResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpgradeAppliedSchemaResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpgradeAppliedSchemaResponse(const UpgradeAppliedSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpgradeAppliedSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeAppliedSchemaResponse)
    Q_DISABLE_COPY(UpgradeAppliedSchemaResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
