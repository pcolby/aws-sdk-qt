/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "marketplacecatalogrequest.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::MarketplaceCatalogRequest
 * \brief The MarketplaceCatalogRequest class provides an interface for MarketplaceCatalog requests.
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * \enum MarketplaceCatalogRequest::Action
 *
 * This enum describes the actions that can be performed as MarketplaceCatalog
 * requests.
 *
 * \value CancelChangeSetAction MarketplaceCatalog CancelChangeSet action.
 * \value DescribeChangeSetAction MarketplaceCatalog DescribeChangeSet action.
 * \value DescribeEntityAction MarketplaceCatalog DescribeEntity action.
 * \value ListChangeSetsAction MarketplaceCatalog ListChangeSets action.
 * \value ListEntitiesAction MarketplaceCatalog ListEntities action.
 * \value StartChangeSetAction MarketplaceCatalog StartChangeSet action.
 */

/*!
 * Constructs a MarketplaceCatalogRequest object for MarketplaceCatalog \a action.
 */
MarketplaceCatalogRequest::MarketplaceCatalogRequest(const Action action)
    : d_ptr(new MarketplaceCatalogRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MarketplaceCatalogRequest::MarketplaceCatalogRequest(const MarketplaceCatalogRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new MarketplaceCatalogRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MarketplaceCatalogRequest object to be equal to \a other.
 */
MarketplaceCatalogRequest& MarketplaceCatalogRequest::operator=(const MarketplaceCatalogRequest &other)
{
    Q_D(MarketplaceCatalogRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MarketplaceCatalogRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceCatalogRequestPrivate.
 */
MarketplaceCatalogRequest::MarketplaceCatalogRequest(MarketplaceCatalogRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the MarketplaceCatalog action to be performed by this request.
 */
MarketplaceCatalogRequest::Action MarketplaceCatalogRequest::action() const
{
    Q_D(const MarketplaceCatalogRequest);
    return d->action;
}

/*!
 * Returns the name of the MarketplaceCatalog action to be performed by this request.
 */
QString MarketplaceCatalogRequest::actionString() const
{
    return MarketplaceCatalogRequestPrivate::toString(action());
}

/*!
 * Returns the MarketplaceCatalog API version implemented by this request.
 */
QString MarketplaceCatalogRequest::apiVersion() const
{
    Q_D(const MarketplaceCatalogRequest);
    return d->apiVersion;
}

/*!
 * Sets the MarketplaceCatalog action to be performed by this request to \a action.
 */
void MarketplaceCatalogRequest::setAction(const Action action)
{
    Q_D(MarketplaceCatalogRequest);
    d->action = action;
}

/*!
 * Sets the MarketplaceCatalog API version to include in this request to \a version.
 */
void MarketplaceCatalogRequest::setApiVersion(const QString &version)
{
    Q_D(MarketplaceCatalogRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool MarketplaceCatalogRequest::operator==(const MarketplaceCatalogRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MarketplaceCatalog queue name.
 *
 * @par From MarketplaceCatalog FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MarketplaceCatalog queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MarketplaceCatalogRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MarketplaceCatalogRequest::clearParameter(const QString &name)
{
    Q_D(MarketplaceCatalogRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MarketplaceCatalogRequest::clearParameters()
{
    Q_D(MarketplaceCatalogRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MarketplaceCatalogRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MarketplaceCatalogRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MarketplaceCatalogRequest::parameters() const
{
    Q_D(const MarketplaceCatalogRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MarketplaceCatalogRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MarketplaceCatalogRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MarketplaceCatalogRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MarketplaceCatalogRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MarketplaceCatalog request using the given
 * \a endpoint.
 *
 * This MarketplaceCatalog implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MarketplaceCatalogRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MarketplaceCatalogRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MarketplaceCatalog::MarketplaceCatalogRequestPrivate
 * \brief The MarketplaceCatalogRequestPrivate class provides private implementation for MarketplaceCatalogRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a MarketplaceCatalogRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
MarketplaceCatalogRequestPrivate::MarketplaceCatalogRequestPrivate(const MarketplaceCatalogRequest::Action action, MarketplaceCatalogRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MarketplaceCatalogRequest class's copy constructor.
 */
MarketplaceCatalogRequestPrivate::MarketplaceCatalogRequestPrivate(const MarketplaceCatalogRequestPrivate &other,
                                     MarketplaceCatalogRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MarketplaceCatalogRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MarketplaceCatalog service's Action
 * query parameters.
 */
QString MarketplaceCatalogRequestPrivate::toString(const MarketplaceCatalogRequest::Action &action)
{
    #define ActionToString(action) \
        case MarketplaceCatalogRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MarketplaceCatalog
} // namespace QtAws
