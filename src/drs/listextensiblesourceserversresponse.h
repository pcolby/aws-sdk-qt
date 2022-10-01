// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIBLESOURCESERVERSRESPONSE_H
#define QTAWS_LISTEXTENSIBLESOURCESERVERSRESPONSE_H

#include "drsresponse.h"
#include "listextensiblesourceserversrequest.h"

namespace QtAws {
namespace Drs {

class ListExtensibleSourceServersResponsePrivate;

class QTAWSDRS_EXPORT ListExtensibleSourceServersResponse : public DrsResponse {
    Q_OBJECT

public:
    ListExtensibleSourceServersResponse(const ListExtensibleSourceServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExtensibleSourceServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensibleSourceServersResponse)
    Q_DISABLE_COPY(ListExtensibleSourceServersResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
