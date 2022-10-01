// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTALLEDCOMPONENTSRESPONSE_H
#define QTAWS_LISTINSTALLEDCOMPONENTSRESPONSE_H

#include "greengrassv2response.h"
#include "listinstalledcomponentsrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListInstalledComponentsResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT ListInstalledComponentsResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    ListInstalledComponentsResponse(const ListInstalledComponentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstalledComponentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstalledComponentsResponse)
    Q_DISABLE_COPY(ListInstalledComponentsResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
