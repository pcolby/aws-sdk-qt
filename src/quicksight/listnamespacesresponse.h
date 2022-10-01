// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMESPACESRESPONSE_H
#define QTAWS_LISTNAMESPACESRESPONSE_H

#include "quicksightresponse.h"
#include "listnamespacesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListNamespacesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListNamespacesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListNamespacesResponse(const ListNamespacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNamespacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamespacesResponse)
    Q_DISABLE_COPY(ListNamespacesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
