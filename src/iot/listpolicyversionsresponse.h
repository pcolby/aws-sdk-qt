// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYVERSIONSRESPONSE_H
#define QTAWS_LISTPOLICYVERSIONSRESPONSE_H

#include "iotresponse.h"
#include "listpolicyversionsrequest.h"

namespace QtAws {
namespace IoT {

class ListPolicyVersionsResponsePrivate;

class QTAWSIOT_EXPORT ListPolicyVersionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListPolicyVersionsResponse(const ListPolicyVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPolicyVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyVersionsResponse)
    Q_DISABLE_COPY(ListPolicyVersionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
