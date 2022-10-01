// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEFAULTVOCABULARYRESPONSE_H
#define QTAWS_ASSOCIATEDEFAULTVOCABULARYRESPONSE_H

#include "connectresponse.h"
#include "associatedefaultvocabularyrequest.h"

namespace QtAws {
namespace Connect {

class AssociateDefaultVocabularyResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateDefaultVocabularyResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateDefaultVocabularyResponse(const AssociateDefaultVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDefaultVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDefaultVocabularyResponse)
    Q_DISABLE_COPY(AssociateDefaultVocabularyResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
