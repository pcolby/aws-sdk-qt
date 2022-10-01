// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUNDLESRESPONSE_H
#define QTAWS_LISTBUNDLESRESPONSE_H

#include "mobileresponse.h"
#include "listbundlesrequest.h"

namespace QtAws {
namespace Mobile {

class ListBundlesResponsePrivate;

class QTAWSMOBILE_EXPORT ListBundlesResponse : public MobileResponse {
    Q_OBJECT

public:
    ListBundlesResponse(const ListBundlesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBundlesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBundlesResponse)
    Q_DISABLE_COPY(ListBundlesResponse)

};

} // namespace Mobile
} // namespace QtAws

#endif
