// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETADATARESPONSE_H
#define QTAWS_GETMETADATARESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "getmetadatarequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetMetadataResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT GetMetadataResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    GetMetadataResponse(const GetMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetadataResponse)
    Q_DISABLE_COPY(GetMetadataResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
