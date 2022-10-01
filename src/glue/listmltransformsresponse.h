// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMLTRANSFORMSRESPONSE_H
#define QTAWS_LISTMLTRANSFORMSRESPONSE_H

#include "glueresponse.h"
#include "listmltransformsrequest.h"

namespace QtAws {
namespace Glue {

class ListMLTransformsResponsePrivate;

class QTAWSGLUE_EXPORT ListMLTransformsResponse : public GlueResponse {
    Q_OBJECT

public:
    ListMLTransformsResponse(const ListMLTransformsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMLTransformsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMLTransformsResponse)
    Q_DISABLE_COPY(ListMLTransformsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
