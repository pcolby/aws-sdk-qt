// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTARGETRESOURCETYPERESPONSE_H
#define QTAWS_GETTARGETRESOURCETYPERESPONSE_H

#include "fisresponse.h"
#include "gettargetresourcetyperequest.h"

namespace QtAws {
namespace Fis {

class GetTargetResourceTypeResponsePrivate;

class QTAWSFIS_EXPORT GetTargetResourceTypeResponse : public FisResponse {
    Q_OBJECT

public:
    GetTargetResourceTypeResponse(const GetTargetResourceTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTargetResourceTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTargetResourceTypeResponse)
    Q_DISABLE_COPY(GetTargetResourceTypeResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
