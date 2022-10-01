// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMARESPONSE_H
#define QTAWS_CREATESCHEMARESPONSE_H

#include "personalizeresponse.h"
#include "createschemarequest.h"

namespace QtAws {
namespace Personalize {

class CreateSchemaResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateSchemaResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateSchemaResponse(const CreateSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSchemaResponse)
    Q_DISABLE_COPY(CreateSchemaResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
