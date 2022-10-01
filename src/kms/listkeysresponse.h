// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSRESPONSE_H
#define QTAWS_LISTKEYSRESPONSE_H

#include "kmsresponse.h"
#include "listkeysrequest.h"

namespace QtAws {
namespace Kms {

class ListKeysResponsePrivate;

class QTAWSKMS_EXPORT ListKeysResponse : public KmsResponse {
    Q_OBJECT

public:
    ListKeysResponse(const ListKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeysResponse)
    Q_DISABLE_COPY(ListKeysResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
