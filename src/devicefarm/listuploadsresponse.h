// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPLOADSRESPONSE_H
#define QTAWS_LISTUPLOADSRESPONSE_H

#include "devicefarmresponse.h"
#include "listuploadsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListUploadsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListUploadsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListUploadsResponse(const ListUploadsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUploadsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUploadsResponse)
    Q_DISABLE_COPY(ListUploadsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
