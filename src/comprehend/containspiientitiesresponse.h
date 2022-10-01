// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTAINSPIIENTITIESRESPONSE_H
#define QTAWS_CONTAINSPIIENTITIESRESPONSE_H

#include "comprehendresponse.h"
#include "containspiientitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class ContainsPiiEntitiesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ContainsPiiEntitiesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ContainsPiiEntitiesResponse(const ContainsPiiEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ContainsPiiEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ContainsPiiEntitiesResponse)
    Q_DISABLE_COPY(ContainsPiiEntitiesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
