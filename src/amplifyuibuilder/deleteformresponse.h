// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORMRESPONSE_H
#define QTAWS_DELETEFORMRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "deleteformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteFormResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT DeleteFormResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    DeleteFormResponse(const DeleteFormRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFormRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFormResponse)
    Q_DISABLE_COPY(DeleteFormResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
