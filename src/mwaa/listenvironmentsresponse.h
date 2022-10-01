// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSRESPONSE_H
#define QTAWS_LISTENVIRONMENTSRESPONSE_H

#include "mwaaresponse.h"
#include "listenvironmentsrequest.h"

namespace QtAws {
namespace Mwaa {

class ListEnvironmentsResponsePrivate;

class QTAWSMWAA_EXPORT ListEnvironmentsResponse : public MwaaResponse {
    Q_OBJECT

public:
    ListEnvironmentsResponse(const ListEnvironmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnvironmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentsResponse)
    Q_DISABLE_COPY(ListEnvironmentsResponse)

};

} // namespace Mwaa
} // namespace QtAws

#endif
