// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMARESPONSE_H
#define QTAWS_DELETESCHEMARESPONSE_H

#include "personalizeresponse.h"
#include "deleteschemarequest.h"

namespace QtAws {
namespace Personalize {

class DeleteSchemaResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DeleteSchemaResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DeleteSchemaResponse(const DeleteSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaResponse)
    Q_DISABLE_COPY(DeleteSchemaResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
