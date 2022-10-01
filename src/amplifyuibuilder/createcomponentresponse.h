// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTRESPONSE_H
#define QTAWS_CREATECOMPONENTRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "createcomponentrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateComponentResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT CreateComponentResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    CreateComponentResponse(const CreateComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComponentResponse)
    Q_DISABLE_COPY(CreateComponentResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
