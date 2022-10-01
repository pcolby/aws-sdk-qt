// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORMRESPONSE_H
#define QTAWS_CREATEFORMRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "createformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateFormResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT CreateFormResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    CreateFormResponse(const CreateFormRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFormRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFormResponse)
    Q_DISABLE_COPY(CreateFormResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
