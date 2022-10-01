// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNIQUEPROBLEMSRESPONSE_H
#define QTAWS_LISTUNIQUEPROBLEMSRESPONSE_H

#include "devicefarmresponse.h"
#include "listuniqueproblemsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListUniqueProblemsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListUniqueProblemsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListUniqueProblemsResponse(const ListUniqueProblemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUniqueProblemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUniqueProblemsResponse)
    Q_DISABLE_COPY(ListUniqueProblemsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
