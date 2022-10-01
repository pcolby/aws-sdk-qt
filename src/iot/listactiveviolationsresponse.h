// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVEVIOLATIONSRESPONSE_H
#define QTAWS_LISTACTIVEVIOLATIONSRESPONSE_H

#include "iotresponse.h"
#include "listactiveviolationsrequest.h"

namespace QtAws {
namespace IoT {

class ListActiveViolationsResponsePrivate;

class QTAWSIOT_EXPORT ListActiveViolationsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListActiveViolationsResponse(const ListActiveViolationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActiveViolationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActiveViolationsResponse)
    Q_DISABLE_COPY(ListActiveViolationsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
