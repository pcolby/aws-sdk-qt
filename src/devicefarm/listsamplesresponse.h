// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMPLESRESPONSE_H
#define QTAWS_LISTSAMPLESRESPONSE_H

#include "devicefarmresponse.h"
#include "listsamplesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListSamplesResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListSamplesResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListSamplesResponse(const ListSamplesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSamplesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSamplesResponse)
    Q_DISABLE_COPY(ListSamplesResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
