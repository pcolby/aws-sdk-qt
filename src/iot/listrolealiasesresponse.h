// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEALIASESRESPONSE_H
#define QTAWS_LISTROLEALIASESRESPONSE_H

#include "iotresponse.h"
#include "listrolealiasesrequest.h"

namespace QtAws {
namespace IoT {

class ListRoleAliasesResponsePrivate;

class QTAWSIOT_EXPORT ListRoleAliasesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListRoleAliasesResponse(const ListRoleAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoleAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoleAliasesResponse)
    Q_DISABLE_COPY(ListRoleAliasesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
