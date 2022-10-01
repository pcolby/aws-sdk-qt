// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDJOBTEMPLATESRESPONSE_H
#define QTAWS_LISTMANAGEDJOBTEMPLATESRESPONSE_H

#include "iotresponse.h"
#include "listmanagedjobtemplatesrequest.h"

namespace QtAws {
namespace IoT {

class ListManagedJobTemplatesResponsePrivate;

class QTAWSIOT_EXPORT ListManagedJobTemplatesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListManagedJobTemplatesResponse(const ListManagedJobTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedJobTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedJobTemplatesResponse)
    Q_DISABLE_COPY(ListManagedJobTemplatesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
