// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATAFLAGRESPONSE_H
#define QTAWS_PUTMETADATAFLAGRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "putmetadataflagrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class PutMetadataFlagResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT PutMetadataFlagResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    PutMetadataFlagResponse(const PutMetadataFlagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetadataFlagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetadataFlagResponse)
    Q_DISABLE_COPY(PutMetadataFlagResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
