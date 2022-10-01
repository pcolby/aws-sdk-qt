// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSRESPONSE_H
#define QTAWS_LISTCHANNELSRESPONSE_H

#include "mediapackageresponse.h"
#include "listchannelsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ListChannelsResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT ListChannelsResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    ListChannelsResponse(const ListChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsResponse)
    Q_DISABLE_COPY(ListChannelsResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
