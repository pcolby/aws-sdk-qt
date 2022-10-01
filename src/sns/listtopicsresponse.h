// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSRESPONSE_H
#define QTAWS_LISTTOPICSRESPONSE_H

#include "snsresponse.h"
#include "listtopicsrequest.h"

namespace QtAws {
namespace Sns {

class ListTopicsResponsePrivate;

class QTAWSSNS_EXPORT ListTopicsResponse : public SnsResponse {
    Q_OBJECT

public:
    ListTopicsResponse(const ListTopicsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTopicsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicsResponse)
    Q_DISABLE_COPY(ListTopicsResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
