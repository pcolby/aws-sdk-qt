// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMENTITYTYPERESPONSE_H
#define QTAWS_CREATECUSTOMENTITYTYPERESPONSE_H

#include "glueresponse.h"
#include "createcustomentitytyperequest.h"

namespace QtAws {
namespace Glue {

class CreateCustomEntityTypeResponsePrivate;

class QTAWSGLUE_EXPORT CreateCustomEntityTypeResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateCustomEntityTypeResponse(const CreateCustomEntityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomEntityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomEntityTypeResponse)
    Q_DISABLE_COPY(CreateCustomEntityTypeResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
