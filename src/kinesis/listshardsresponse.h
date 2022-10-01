// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHARDSRESPONSE_H
#define QTAWS_LISTSHARDSRESPONSE_H

#include "kinesisresponse.h"
#include "listshardsrequest.h"

namespace QtAws {
namespace Kinesis {

class ListShardsResponsePrivate;

class QTAWSKINESIS_EXPORT ListShardsResponse : public KinesisResponse {
    Q_OBJECT

public:
    ListShardsResponse(const ListShardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListShardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListShardsResponse)
    Q_DISABLE_COPY(ListShardsResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
