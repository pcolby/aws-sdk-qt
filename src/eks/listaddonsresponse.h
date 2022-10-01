// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTADDONSRESPONSE_H
#define QTAWS_LISTADDONSRESPONSE_H

#include "eksresponse.h"
#include "listaddonsrequest.h"

namespace QtAws {
namespace Eks {

class ListAddonsResponsePrivate;

class QTAWSEKS_EXPORT ListAddonsResponse : public EksResponse {
    Q_OBJECT

public:
    ListAddonsResponse(const ListAddonsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAddonsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAddonsResponse)
    Q_DISABLE_COPY(ListAddonsResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
