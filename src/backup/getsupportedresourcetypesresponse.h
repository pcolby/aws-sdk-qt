// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPORTEDRESOURCETYPESRESPONSE_H
#define QTAWS_GETSUPPORTEDRESOURCETYPESRESPONSE_H

#include "backupresponse.h"
#include "getsupportedresourcetypesrequest.h"

namespace QtAws {
namespace Backup {

class GetSupportedResourceTypesResponsePrivate;

class QTAWSBACKUP_EXPORT GetSupportedResourceTypesResponse : public BackupResponse {
    Q_OBJECT

public:
    GetSupportedResourceTypesResponse(const GetSupportedResourceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSupportedResourceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSupportedResourceTypesResponse)
    Q_DISABLE_COPY(GetSupportedResourceTypesResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
