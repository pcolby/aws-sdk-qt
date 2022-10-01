// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMODERATORSRESPONSE_H
#define QTAWS_LISTCHANNELMODERATORSRESPONSE_H

#include "chimeresponse.h"
#include "listchannelmoderatorsrequest.h"

namespace QtAws {
namespace Chime {

class ListChannelModeratorsResponsePrivate;

class QTAWSCHIME_EXPORT ListChannelModeratorsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListChannelModeratorsResponse(const ListChannelModeratorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelModeratorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelModeratorsResponse)
    Q_DISABLE_COPY(ListChannelModeratorsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
