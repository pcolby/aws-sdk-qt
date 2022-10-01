// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSKEYSRESPONSE_H
#define QTAWS_LISTACCESSKEYSRESPONSE_H

#include "iamresponse.h"
#include "listaccesskeysrequest.h"

namespace QtAws {
namespace Iam {

class ListAccessKeysResponsePrivate;

class QTAWSIAM_EXPORT ListAccessKeysResponse : public IamResponse {
    Q_OBJECT

public:
    ListAccessKeysResponse(const ListAccessKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessKeysResponse)
    Q_DISABLE_COPY(ListAccessKeysResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
