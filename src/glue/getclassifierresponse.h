// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERRESPONSE_H
#define QTAWS_GETCLASSIFIERRESPONSE_H

#include "glueresponse.h"
#include "getclassifierrequest.h"

namespace QtAws {
namespace Glue {

class GetClassifierResponsePrivate;

class QTAWSGLUE_EXPORT GetClassifierResponse : public GlueResponse {
    Q_OBJECT

public:
    GetClassifierResponse(const GetClassifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClassifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClassifierResponse)
    Q_DISABLE_COPY(GetClassifierResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
