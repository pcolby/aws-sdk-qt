// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGISTRIESRESPONSE_H
#define QTAWS_LISTREGISTRIESRESPONSE_H

#include "glueresponse.h"
#include "listregistriesrequest.h"

namespace QtAws {
namespace Glue {

class ListRegistriesResponsePrivate;

class QTAWSGLUE_EXPORT ListRegistriesResponse : public GlueResponse {
    Q_OBJECT

public:
    ListRegistriesResponse(const ListRegistriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRegistriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegistriesResponse)
    Q_DISABLE_COPY(ListRegistriesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
