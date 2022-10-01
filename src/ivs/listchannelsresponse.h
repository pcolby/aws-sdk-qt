// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSRESPONSE_H
#define QTAWS_LISTCHANNELSRESPONSE_H

#include "ivsresponse.h"
#include "listchannelsrequest.h"

namespace QtAws {
namespace Ivs {

class ListChannelsResponsePrivate;

class QTAWSIVS_EXPORT ListChannelsResponse : public IvsResponse {
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

} // namespace Ivs
} // namespace QtAws

#endif
