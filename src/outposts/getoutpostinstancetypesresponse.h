// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTINSTANCETYPESRESPONSE_H
#define QTAWS_GETOUTPOSTINSTANCETYPESRESPONSE_H

#include "outpostsresponse.h"
#include "getoutpostinstancetypesrequest.h"

namespace QtAws {
namespace Outposts {

class GetOutpostInstanceTypesResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetOutpostInstanceTypesResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetOutpostInstanceTypesResponse(const GetOutpostInstanceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOutpostInstanceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOutpostInstanceTypesResponse)
    Q_DISABLE_COPY(GetOutpostInstanceTypesResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
