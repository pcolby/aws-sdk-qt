// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMKEYSRESPONSE_H
#define QTAWS_LISTSTREAMKEYSRESPONSE_H

#include "ivsresponse.h"
#include "liststreamkeysrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamKeysResponsePrivate;

class QTAWSIVS_EXPORT ListStreamKeysResponse : public IvsResponse {
    Q_OBJECT

public:
    ListStreamKeysResponse(const ListStreamKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamKeysResponse)
    Q_DISABLE_COPY(ListStreamKeysResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
