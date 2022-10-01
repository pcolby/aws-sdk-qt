// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFORMRESPONSE_H
#define QTAWS_UPDATEFORMRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "updateformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateFormResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT UpdateFormResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    UpdateFormResponse(const UpdateFormRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFormRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFormResponse)
    Q_DISABLE_COPY(UpdateFormResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
