// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORMSRESPONSE_H
#define QTAWS_LISTFORMSRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "listformsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListFormsResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ListFormsResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    ListFormsResponse(const ListFormsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFormsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFormsResponse)
    Q_DISABLE_COPY(ListFormsResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
